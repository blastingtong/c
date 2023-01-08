#include<iostream>
#define Max 20
using namespace std;
typedef struct{
    int ex;
    int c;
}pa[Max];//连续链表式结构的好处：可以以O（1）的复杂度访问任意一个数据元素，且能快速知道长度；所以用数组直接储存数据，便于查找访问
struct polynode{
    int ex;
    int c;
    polynode* next;
};//单独用一个struct来储存一个节点数据，而不是直接储存在class内部，简化访问权限
class poly{
    private:
        polynode* head;
    public:
        poly();
        ~poly();
        void creayepoly(pa a,int n);
        void polydisplay();
        void polysort();
        void polyadd(poly b);//传入poly b的class，相当于只传入头节点，安全便捷
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
