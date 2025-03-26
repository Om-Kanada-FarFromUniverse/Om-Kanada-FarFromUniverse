import java.util.Scanner;
public class TwoDArray2 {

	public static void main(String[] args) {
		String[][] arr= {{"Om", "Kanada"},
						 {"Devi","Dodiya"},
						 {"Kinjal","Baraiya"},
						 {"Pratik","Pareek"}
						 };
		int i, j;
		for(i=0;i<arr.length;i++)
	    {
	    	for(j=0;j < arr[i].length;j++)
	    	{
	    		System.out.print(arr[i][j]+ " ");
	    	}
	    	System.out.println();
	    }

	}

}
