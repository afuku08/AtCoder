#include <iostream>
using namespace std;

    int cross[2010][2010];
    int B[2010][2010];
    int gyou[2010];
    int retu[2010];

int main(){
    int H,W;

    cin >> H >> W;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> cross[i][j];
        }
    }

    
    for(int i=0;i<H;i++){        
        for(int j=0;j<W;j++){
            gyou[i] += cross[i][j];
            retu[j] += cross[i][j];
        }
    }

    for(int i=0;i<H;i++){        
        for(int j=0;j<W;j++){
            B[i][j] = gyou[i] + retu[j] - cross[i][j];
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
