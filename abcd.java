package abcd;

import java.util.Scanner;

public class abcd {      
	public static void main(String[]args){
		Scanner input=new Scanner(System.in);
		System.out.println("����1-7�����֣�");
		int week=input.nextInt();
		input.close();
		switch (week){
		case 1:System.out.println("����һ");break;
		case 2:System.out.println("���ڶ�");break;
		case 3:System.out.println("������");break;
		case 4:System.out.println("������");break;
		case 5:System.out.println("������");break;
		case 6:System.out.println("������");break;
		case 7:System.out.println("������");break;
        }
	}
		
}
		

