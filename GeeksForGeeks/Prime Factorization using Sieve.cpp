void sieve() {}
    vector<int> findPrimeFactors(int N) {
        vector<int> Pf_of_N;
        for (int i = 2; i <= N; ++i) {
            while (N % i == 0) {
                Pf_of_N.push_back(i);
                N /= i;
            }
        }
        return Pf_of_N;
    }
