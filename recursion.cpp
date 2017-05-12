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
    cout << "[recursion serpinskii called]" << endl;
}

int floodFill(GBufferedImage& image, int x, int y, int newColor) {
    // your code here
    cout << "[recursion flood fill called]" << endl;
    return 0;
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
