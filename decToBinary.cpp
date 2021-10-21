vector<int> decToBinary(int n)
    {
        // array to store binary number
        vector<int> binaryNum(32);

        // counter for binary array
        int i = 0;
        while (n > 0)
        {

            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        return binaryNum;
    }