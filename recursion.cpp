/* 
 * TODO: put your own comments here. Also you should leave comments on
 * each of your methods.
 */

#include <math.h>
#include "recursion.h"
#include "map.h"
#include "vector.h"
#include "set.h"
#include "gwindow.h"
#include "gobjects.h"
#include "tokenscanner.h"
using namespace std;

int gcd(int a, int b) {
    // your code here

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //    if (b == 0){
    //        return a;
    //    } else {
    //        int r;
    //        r = a % b;
    //        int c = gcd(b, r);
    //        return c;
    //    }

    if (a % b == 0){
        return b;
    } else {
        return gcd(b, a % b);
    }

    cout << "[recursion gcd called]" << endl;
    return 0;
}

void serpinskii(GWindow &w, int leftX, int leftY, int size, int order) {
    // your code here
    if (order == 1){

        w.drawLine(leftX, leftY, leftX + size, leftY);
        w.drawLine(leftX + size, leftY, leftX + size/2, leftY + ((sqrt(3)/2) * size));
        w.drawLine(leftX + size/2, leftY + ((sqrt(3)/2) * size), leftX, leftY);

    } else {

        serpinskii(w, leftX, leftY, size / 2, order - 1);
        serpinskii(w, leftX + size / 2, leftY, size / 2, order - 1);
        serpinskii(w, leftX + size / 4, leftY + sqrt(3) * size/4, size / 2, order - 1) ;
    }
    cout << "[recursion serpinskii called]" << endl;
}

int floodFill(GBufferedImage& image, int x, int y, int newColor) {


    int jetzt = image.getRGB(x,y);
    int count = 0;

    if (jetzt == newColor || !image.inBounds(x,y)){
        return 0;

    } else{
        image.setRGB(x, y, newColor);
        count += 1;
        if (image.getRGB(x + 1, y) == jetzt){

            count += floodFill(image, x + 1, y, newColor);
        } if (image.getRGB(x - 1, y) == jetzt){
            count += floodFill(image, x - 1, y, newColor);
        } if (image.getRGB(x, y - 1) == jetzt){
            count += floodFill(image, x, y - 1, newColor);
        } if (image.getRGB(x, y + 1) == jetzt){
            count += floodFill(image, x, y + 1, newColor);
        }
    }
   //cout << "[recursion flood fill called]" << endl;
    return count;
}

void personalCurriculum(Map<string, Vector<string>> & prereqMap,string goal) {
    // your code here
    cout << "[recursion personal curriculum called]" << endl;
}

string generate(Map<string, Vector<string> > & grammar, string symbol) {
    // your code here
    cout << "[recursion generate called]" << endl;
    return "";
}
