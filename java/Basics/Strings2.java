import java.util.Scanner;
public class Strings2 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String dnastr,compl="";
		int a,t,g,c;
		a=t=g=c=0;
		System.out.print("Enter a DNA string : ");
		dnastr=sc.next();
		for(int i=0;i<dnastr.length();i++)
		{
				if(dnastr.charAt(i)=='A' || dnastr.charAt(i)== 'a')
				{
					a++;
					compl+='T';
				}
				else if(dnastr.charAt(i)=='T' || dnastr.charAt(i)== 't')
				{
					t++;
					compl+='A';
				}
				else if(dnastr.charAt(i)=='G' || dnastr.charAt(i)== 'g')
				{
					g++;
					compl+='C';
				}
				else if(dnastr.charAt(i)=='C' || dnastr.charAt(i)== 'c')
				{
					c++;
					compl+='G';
				}
				else 
				{ 
					System.out.print("invalid DNA string : ");
				}
		}
		
		System.out.println("complementry : " + compl);
		System.out.println("GC Percent : "+((float)(g+c)/dnastr.length()*100));
		System.out.println( "total A is:"+ a );
		System.out.println( "total T is:"+ t );
		System.out.println( "total G is:"+ g );
		System.out.println( "total C is:"+ c );
	}
	

}
