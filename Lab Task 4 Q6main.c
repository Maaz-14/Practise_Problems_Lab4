#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks (out of 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Error! Invalid marks.\n");
        return 1;
    }

    int grade = marks / 10;

    switch (grade) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}

// #include<stdio.h>
// int main(){
// 	int marks;
// 	scanf("%d",&marks);
// 	if(marks<0){
// 		printf("Invalid marks entered!");
		
// 	}
// 	else if (marks<60)
// 	printf("Grade F");
// 	else if(marks<70)
// 	printf("Grade D");
// 	else if (marks<80)
// 	printf("Grade C");
// 	else if(marks<90)
// 	printf("Grade B");
// 	else if(marks>=90)
// 	printf("Grade A");


// }
