import java.util.Scanner;
public class Arrays1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[] arr;
		arr=new int[] {1,2,3,4,5};
		int arr1[]={1,2,3,4,5,6,7,8,9};
		int arr2[]=new int[10];
		int[] arr3=new int[5];
		for(int i=0;i<arr2.length;i++)
		{
			//System.out.printf("Enter Number %d : ",i+1);
			System.out.print("Enter Number " + (i+1) + " : ");
			arr2[i]=sc.nextInt();
		}
		
		
		for(int i=arr2.length;i>=0;i--)
		{
			
			{
				System.out.println(arr2[i]);
				
			}
		}

	}

}
