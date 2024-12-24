#include <stdio.h>
// 매크로 상수
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위 벗어남\n")
// 길면 백슬래시로 연결
#define INTRO \
  "Perfect C Language \
& Basic Data Structure"

int main() {
  double radius, area;

  printf("반지름 입력(10이하): ");
  scanf("%lf", &radius);
  area = PI * radius * radius;
  if (area > LIMIT)
    ERR_PRN;
  else
    printf("원의 면적: %.2lf (%s)\n", area, MSG);

  return 0;
}