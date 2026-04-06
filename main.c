#include <stdio.h>

int main() {
   // 1. 변수 선언 (5개 이상, 3가지 자료형 사용)
}  char car_type;            // 차량 종류 
{  int hours;                // 시간 
   int minutes;              // 분
   int base_fee = 3000;      // 총 시간(분)
   int extra_minutes= 500;   // 추가 시간
   int total_fee;            // 총 요금
   float discount = 0.0;     // 할인율

  // 2. 시작 출력 
  printf("나만의 주차 요금 계산 프로그램에 오신 것을 환영합니다!\n");
  printf("=========================================\n\n");

  // 3. 입력
  printf("차량 종류를 입력하세요 (A: 일반, B: 소형): ");
  scanf(" %c", &car_type);

  printf("주차 시간 (시간)을 입력하세요:" );
  scanf(" %d", &hours);

  printf("주차 시간 (분)을 입력하세요:" );
  scanf(" %d", &minutes);

  // 4. 계산
  total_minutes = hours * 60 + minutes;

  if (total_time <= 60) {
      total_fee = 3000;
  } else {
      extra_minutes = total_minutes - 60;
      total_fee = 3000 + (extra_minutes / 10) * 500;
  }

  // 차량 할인 (소형차 20%)
  if (car_type == 'B') {
      discount = 0.2;  
      total_fee = total_fee * (1 - discount);
  }

  // 5. 출력
  printf("\n[주차 요금 계산 결과]\n");
  printf("-----------------------------------------");
  printf("차량 종류 : %c\n", car_type);
  printf("총 주차 시간 : %d시간 %d분\n", hours, minutes);
  printf("총 주차 요금 : %d원\n", total_fee);
  printf("-----------------------------------------");
  
  printf("\n이용해주셔서 감사합니다!\n");
  return 0; 
}
