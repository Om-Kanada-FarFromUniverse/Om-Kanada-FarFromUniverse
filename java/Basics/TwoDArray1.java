import java.util.Scanner;
public class TwoDArray1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[][] arr1;
		arr1=new int[5][6];
		int arr2[][]= {{1,2,3},{4,5,6},{7,8,9}};
		int arr3[][]=new int[3][3];
		int[][] arr;
		int r, c;
		
		System.out.print("Enter the number of rows : ");
		r=sc.nextInt();
		System.out.print("Enter the number of cols : ");
		c=sc.nextInt();
		
		arr=new int[r][c];
		
	    int i, j;
	    System.out.println(arr.length);
	    for(i=0;i<arr.length;i++)
	    {
	    	for(j=0;j < arr[i].length;j++)
	    	{
	    		System.out.printf("Enter number [%d] [%d] : ",i,j);
	    		arr[i][j]=sc.nextInt();
	    	}
	    }
	    
	    for(i=0;i<arr.length;i++)
	    {
	    	for(j=0;j < arr[i].length;j++)
	    	{
	    		System.out.print(arr[i][j] + " ");
	    	}
	    	System.out.println();
	    	
	    }

	}

}
