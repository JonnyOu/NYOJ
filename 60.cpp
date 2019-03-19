#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char name[21], note[21];//学生姓名 
		int stu, score_1, score_2, paper, sum = 0, sum_max = 0, sum_stu;//学生人数，期末平均成绩，班级评定成绩，论文数量 ,总奖学金， 最高奖学金 
		char stu1, stu2;//学生干部，西部学生
		
		scanf("%d", &stu);
		
		for (int i = 0; i < stu; i++) {
			sum_stu = 0;
			scanf("%s", name);
			scanf("%d%d", &score_1, &score_2);
			getchar();scanf("%c", &stu1);
			getchar();scanf("%c", &stu2);
			getchar();scanf("%d", &paper);
			if (score_1 > 80 && paper > 0) sum_stu += 8000;
			if (score_1 > 85 && score_2 >80) sum_stu += 4000;
			if (score_1 > 90) sum_stu += 2000;
			if (score_1 > 85 && stu2 == 'Y') sum_stu += 1000;
			if (score_2 > 80 && stu1 == 'Y') sum_stu += 850;
			if (sum_max < sum_stu) {
				sum_max = sum_stu;
				strcpy(note, name);
			}
			sum += sum_stu;
		}
		
		printf("%s\n%d\n%d\n", note, sum_max, sum);
	}
}
