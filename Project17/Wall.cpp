#include"Header.h"


bool Wall::OchenMnogo(vector<int> v, int y) {
    int inty =0;
    for (auto& i : v)
    {
        if (i == y) {
            inty++;
        }
    }
    if (inty == 0)
    {
        return true;
    }
    else
        return false;
}
void Wall::Wallvecfill(vector<vector <char>>& vec, Wall& wa, int rasd) {
    for (size_t i = 0; i <vec[wa.WallY].size(); i++)
    {

    }
    for (int i = rasd; i <= vec[wa.WallY].size() - 2; i++) {
        vec[wa.WallY][i] = '$';
    }


}
void Wall::Wallvecfill(vector<vector <char>>& vec, Wall& wa) {
    for (int i = 1; i <= wa.WallSize; i++) {
        vec[wa.WallY][i] = '$';
    }


}
void Wall::wallCreat(vector<vector <char>>& vec, Wall& wa, Wall wan) {
    Box b;
    srand(time(NULL));
    wa.WallQuantity = rand() % 5 + 4;
    vecFILL(vec);
    vector <int> absur;

    for (size_t i = 0; i <= wa.WallQuantity; i++)
    {

            wa.WallY = rand() % (vec.size()-2) + 1;
            wa.WallSize = rand() % (vec[wa.WallY].size()/2 - 5)+3 ;
            wa.WallNothing = vec[wa.WallY].size() - 2;
            if (wa.OchenMnogo(absur, wa.WallY)) {
            absur.push_back(wa.WallY);
            

            if (wa.WallY != 4 && wa.WallY != 3 && wa.WallY && wa.WallY != 10) {

                wa.WallRigtorLeft =rand() % 2;
                if (wa.WallRigtorLeft == 1) {
                    wa.Wallvecfill(vec, wa, wa.WallNothing - wa.WallSize);
                }

                else {
                    wa.Wallvecfill(vec, wa);
                }
            }
            else
            {
                ++wa.WallQuantity;
            }

        }
        else
        {
            ++wa.WallQuantity;
        }
       
    }



}