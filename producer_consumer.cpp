#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int MaxItems;
int BufferSize;
int N;

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
vector<int> buffer;
pthread_mutex_t mutex;

void *producer(void *pro_no)
{
    for (int i = 0; i < MaxItems; i++)
    {
        int item = rand() % 1000;
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);

        buffer[in] = item;
        cout << "Producer " << *((int *)pro_no) << " Insert Item " << buffer[in] << " at " << in << "\n";
        in = (in + 1) % BufferSize;

        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
    return (void *)NULL;
}

void *consumer(void *con_no)
{
    for (int i = 0; i < MaxItems; i++)
    {
        sem_wait(&full);
        pthread_mutex_lock(&mutex); // acquire mutex lock

        int item = buffer[out];
        cout << "Consumer " << *((int *)con_no) << " Remove Item " << item << " at " << out << "\n";
        out = (out + 1) % BufferSize;

        pthread_mutex_unlock(&mutex);
//        mutex_lock;
        sem_post(&empty);
    }
    return (void *)NULL;
}

int main()
{
    cout << "Enter number of producers/consumers for simulation: ";
    cin >> N;
    cout << "Enter Buffer Size for simulation: ";
    cin >> BufferSize;
    cout << "Enter max items for simulation: ";
    cin >> MaxItems;
    buffer.resize(BufferSize);

    pthread_t pro_thread[N], con_thread[N];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty, 0, BufferSize);
    sem_init(&full, 0, 0);

    int seq[N];
    for (int i = 0; i < N; i++)
        seq[i] = i + 1;

    for (int i = 0; i < N; i++)
    {
        pthread_create(&pro_thread[i], NULL, (void *(*)(void *))producer, (void *)&seq[i]);
        pthread_create(&con_thread[i], NULL, (void *(*)(void *))consumer, (void *)&seq[i]);
        //cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        pthread_join(pro_thread[i], NULL);
        pthread_join(con_thread[i], NULL);
    }

    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}
