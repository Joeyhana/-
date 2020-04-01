#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn=100010;

struct student{
    int id;
    char name[10];
    int score;
}stu[maxn];

bool cmp1(student a,student b){
    return a.id<b.id;
}
