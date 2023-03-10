// Time Complexity : O(n)
// Space Complexity : O(1)

template<typename T>
T Max_Sum_Subarray(const vector<T> &a, T limit) {
    int n = a.size();
    T mx = limit;
    T sm = 0;
    for(int i = 0; i < n; i++) {
        sm = max(sm + a[i], a[i]);
        mx = max(mx, sm);
        cout << mx << endl;
    }
    return mx;
}
