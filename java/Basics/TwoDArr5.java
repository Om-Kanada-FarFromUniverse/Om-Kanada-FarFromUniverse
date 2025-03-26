import java.util.Scanner;

public class TwoDArr5 {

	public static void main(String[] args) {
		int[][] arr=new int[5][5];
		Scanner sc=new Scanner(System.in);
		int i,j,flg;
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.print("Enter a number : ");
				arr[i][j]=sc.nextInt();
				
			}
		}
		for(i=0;i<arr.length;i++)
		{
			for(j=0,flg=0;j<arr[i].length;j++)
			{
				if(arr[i][j]>=10)
				{
					flg=1;
					break;
				}
			}
				if(flg==1)
					for(j=0;j<arr[i].length;j++)
					{
						System.out.printf("%3d ",arr[i][j]);
					}
				System.out.println();
			
		}


	}

}
