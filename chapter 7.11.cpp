#include <stdio.h>

#define AP 2.05
#define BP 1.15
#define CP 1.09
#define DISCOUNT_LIMIT 100
#define DISCOUNT_RATE 0.05
#define SHIPT1 5
#define SHIPT2 20
#define T1P 6.5
#define T2P 14
#define T3P 0.5


float shipping_cost(float a, float b ,float c);

int main() {
	float num_a = 0, num_b = 0, num_c = 0;
	char ch;
	printf("Please order:\na. artichokes		b. beets\nc. carrots		q. Finished!\n");
	while((ch = getchar()) != 'q') {

		if(ch == '\n')
			continue;

		switch(ch) {
			case 'a':
				printf("How many pound do u want for artichoke?\n" );
				scanf("%f",&num_a);
				break;
			case 'b':
				printf("How many pound do u want for beef?\n" );
				scanf("%f",&num_b);
				break;

			case 'c':
				printf("How many pound do u want for carrot?\n");
				scanf("%f",&num_c);

				break;

			default:
				printf("Please enter 'a' or 'b' or 'c' or 'q':\n");
		}
		printf("Please order:\na. artichokes		b. beets\nc. carrots		q. Finished!\n");

	}
	printf("Order list: \n");
	if (num_a > 0)
		printf("artichoke $%.2f per pound, %.2f pound ordered, cost $%.2f\n",AP, num_a, AP * num_a);
	if ( num_b > 0)
		printf("beef      $%.2f per pound, %.2f pound ordered, cost $%.2f\n",BP, num_b, BP * num_b);
	if ( num_c > 0)
		printf("carrot    $%10.2f per pound, %.2f pound ordered, cost $%.2f\n", CP, num_c, CP * num_c);


	float discount = 0;
	float total_cost = num_a * AP + num_b * BP + num_c * CP ;
	if (total_cost >= 100)
		discount = total_cost * 0.05;
	float grand_total = total_cost - discount + shipping_cost(num_a, num_b, num_c);
	printf("total cost: $%.2f, discount: $%.2f, shipping charge:$%.2f , grand total: $%.2f",total_cost, discount,shipping_cost(num_a, num_b, num_c), grand_total );


	return 0;
}

float shipping_cost(float a, float b ,float c) {
	float total_weight = a+b+c;
	if (total_weight <= 0)
		return 0.0;
	else if (total_weight <= 5)
		return 6.5;
	else if (total_weight <20)
		return 14;
	else return 14 + (total_weight - 20) * 0.5;

}







































































































//#include <stdio.h>
//
//int main(){
//
//
//
//	return 0;
//}
