#include <stdio.h>

int main(void) {
    /* 課題0303: カッコの中を埋めて、入力されたdoubleのデータを，小数点以下15桁まで表示するプログラムを書け． */
    double d;
    scanf("%lf",&d);/*前と同じ、%lfは%fにするとfloat指定になっちゃうから気を付けて　あと文章ちゃんと閉じろ */
    printf("%.15f\n",d); /*桁指定オプション 文章ちゃんと閉じろ */
    return 0;
}
