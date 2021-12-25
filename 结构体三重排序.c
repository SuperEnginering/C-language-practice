#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NN 100
typedef struct 
{
	int id;
	int de;
	int ca;
	int sum;
	int jige;//是否及格 ，及格的输出，不及格不输出 
//	int lei;//属于第几类 
}student;

typedef struct 
{
	int id;
	int de;
	int ca;
	int sum;
}s;
int cmp(const void *a,const void *b)
{
	s *p=(s*)a;
  	s *q=(s*)b;
  	if(p->sum!=q->sum)
  	{
  		return q->sum - p->sum;	
	}
	else if(p->sum ==q->sum )
	{
		if(q->de !=p->de)
		return q->de - p->de;
		else 
		return p->id -q->id ;
	}
}

int number=0;
int main(){
  int N,L,H;
  scanf("%d %d %d",&N,&L,&H);
  student stu[NN];
  
  s s1[NN];//第一类
  s s2[NN];//第二类 
  s s3[NN];//第三类
  s s4[NN];//第四类
  //输入分类 
  int i,j1=0,j2=0,j3=0,j4=0;
  for(i=0;i<N;i++)
  {
	scanf("%d %d %d",&stu[i].id ,&stu[i].de,&stu[i].ca );
	stu[i].sum =stu[i].ca +stu[i].de;
	if(stu[i].de>=L&&stu[i].ca >=L)
	{
		stu[i].jige =1;
		number++;	
	}
	else
	{
		stu[i].jige =0;
//		lei=0;
	}
	//对及格的人进行分类 
	//放到另一个结构体内 
	if(stu[i].jige)
	{
		//德分和才分均不低于此线的被定义为“才德全尽”
		if(stu[i].de>=H&&stu[i].ca >=H)	
		{
			s1[j1].id =stu[i].id;
			s1[j1].de =stu[i].de;
			s1[j1].ca =stu[i].ca;
			s1[j1].sum =stu[i].sum ;
			j1+=1;
		}
		//才分不到但德分到线的一类考生属于“德胜才”
		//但排在第一类考生之后
		else if(stu[i].de>=H&&stu[i].ca <H)
		{
			s2[j2].id =stu[i].id;
			s2[j2].de =stu[i].de;
			s2[j2].ca =stu[i].ca;
			s2[j2].sum =stu[i].sum ;
			j2+=1;
		}
		//德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者
		//但排在第二类考生之后；
		else if (stu[i].de<H&&stu[i].ca <H&& stu[i].de>=stu[i].ca)
		{
			s3[j3].id =stu[i].id;
			s3[j3].de =stu[i].de;
			s3[j3].ca =stu[i].ca;
			s3[j3].sum =stu[i].sum ;
			j3+=1;
		}
		else
		{
			s4[j4].id =stu[i].id;
			s4[j4].de =stu[i].de;
			s4[j4].ca =stu[i].ca;
			s4[j4].sum =stu[i].sum ;
			j4+=1;
		}
	}	 
  	
  }
  //排序
  qsort(s1,j1,sizeof(s1[0]),cmp);		
  qsort(s2,j2,sizeof(s2[0]),cmp);
  qsort(s3,j3,sizeof(s3[0]),cmp);
  qsort(s4,j4,sizeof(s4[0]),cmp); 
  
  //输出
  printf("%d\n",number);
  for(i=0;i<j1;i++)	 	
  printf("%d %d %d\n",s1[i].id ,s1[i].de ,s1[i].ca );
  for(i=0;i<j2;i++)	 	
  printf("%d %d %d\n",s2[i].id ,s2[i].de ,s2[i].ca );
  for(i=0;i<j3;i++)	 	
  printf("%d %d %d\n",s3[i].id ,s3[i].de ,s3[i].ca );
  for(i=0;i<j4;i++)	 	
  printf("%d %d %d\n",s4[i].id ,s4[i].de ,s4[i].ca );
  return 0;
}
