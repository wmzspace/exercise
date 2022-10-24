#include <iostream>
using namespace std;

int main()
{
    int n, len;
    cin >> n;
    len = 2 * n;
    int *li = new int[len];
    for (int i = 0; i < len; i++)
    {
        for (int i2 = i + 1; i2 < len; i2++)
        {
            for (int i3 = i2 + 1; i3 < len; i3++)
            {
                for(int m=0;m<len;m++){
                    li[m]=-1;
                }
                li[i] = li[i2] = li[i3] = 1;
                for (int i4 = 0, sum = 0; i4 < len; i4++)
                {
                    sum += li[i4];
                    if(sum<0){
                        break;
                    }
                    if(i4+1==len){
                        for (int i5 = 0; i5 < len;i5++){
                            printf("%d ", li[i5]);
                        }
                        puts("");
                        break;
                    }
                }
            }
        }
    }
    return 0;
}