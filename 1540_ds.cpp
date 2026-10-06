#include <iostream>
#include <queue>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    queue<int> q;             // 记录内存中单词进入的先后顺序
    bool inMem[1001] = {0};   // 单词值不超过 1000，标记是否在内存中

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int w;
        cin >> w;

        if (!inMem[w]) {              // 内存中没有，需要查词典
            ++ans;
            if ((int)q.size() == M) { // 内存已满，清空最早进入的单词
                int old = q.front();
                q.pop();
                inMem[old] = false;
            }
            q.push(w);                // 新单词进入内存
            inMem[w] = true;
        }
        // 内存中已有该单词，无需查词典
    }

    cout << ans << endl;
    return 0;
}
