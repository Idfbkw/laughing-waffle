package abcd;

import java.util.Scanner;

public class abcd {      
	public static void main(String[]args){
		Scanner input=new Scanner(System.in);
		System.out.println("输入1-7的数字：");
		int week=input.nextInt();
		input.close();
		switch (week){
		case 1:System.out.println("星期一");break;
		case 2:System.out.println("星期二");break;
		case 3:System.out.println("星期三");break;
		case 4:System.out.println("星期四");break;
		case 5:System.out.println("星期五");break;
		case 6:System.out.println("星期六");break;
		case 7:System.out.println("星期天");break;
        }
	}
		
}
		

