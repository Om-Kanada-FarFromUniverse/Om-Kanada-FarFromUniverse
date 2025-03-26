import java.util.Scanner;
public class TwoDArray4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int arr1[][]=new int[4][5];
		int arr2[][]=new int [4][4];
		int arr[][]=new int[4][]; // Array with simply the number of rows
		int i, j, s;
		for(i=0;i<arr.length;i++)
		{
			System.out.print("Enter the number of values :  ");
			s=sc.nextInt();
			arr[i]=new int[s];
		}
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.print("Enter number ["+i+"]["+j+"] : ");
				arr[i][j]=sc.nextInt();
			}
		}
		
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.printf("%4d, ", arr[i][j]);
			}
			System.out.println();
		}	
	
		

	}

}
