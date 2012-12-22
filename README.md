# iutil

C でコーディングしてるときに必要と感じたちょっとした関数たち。   
これから充実していく予定。

## functions
### メモリ系

    void *imalloc(size_t _size, const char *_msg)

エラー処理付きの malloc 。  

    FILE *ifopen(const char *_name, const char *_mode)

エラー処理付きの fopen 。


### 文字列系

    char *istrcln(const char *str)

文字列 str のクローンを生成する。   
