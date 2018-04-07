//matrix-exploration.h

typedef struct{
        int path[N];
        int len;
}Path;

class matrix-exploration
{
public:
        matrix-exploration();
        ~matrix-exploration();
        int top(Path *p);
        bool visited(Path *p, int x);
        void print_path(Path *p);
};
        
