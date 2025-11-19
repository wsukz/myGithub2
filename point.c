#include <stdio.h>
#include <math.h>
struct Point 
{
    int x;
    int y;
};
float side(struct Point p1, struct Point p2) {
    float l = ((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y));
    return sqrt(l);
}
 
int main() {
    /*
    struct Point p1, p2, p3;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);   
    scanf("%d %d", &p3.x, &p3.y);
    float a = side(p1, p2);
    float b = side(p2, p3);
    float c = side(p3, p1);
    printf("%.2f\n", a + b + c);
    */
    struct Point p1, p2 = {0,0};
    scanf("%d %d", &p1.x, &p1.y);
    printf("%.2f\n", side(p1, p2));
    return 0;
}