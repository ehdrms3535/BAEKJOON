import java.util.Scanner;
import java.io.FileInputStream;

class Solution
{
	public static void main(String args[]) throws Exception
	{

		Scanner sc = new Scanner(System.in);
		int T;
		T=sc.nextInt();

		for(int test_case = 1; test_case <= T; test_case++)
		{
			int N = sc.nextInt();
            int v=0;
            int dis =0;
            for(int i=0; i<N; i++){
                int type = sc.nextInt();
                if(type==0){
                    dis+=v;
                    continue;
                }
                int a = sc.nextInt();
                if(type==1){
                	v+=a;
                    dis+=v;
                }
                else{
                	v-=a;
                    if(v<0) v=0;
                    dis+=v;
                }
				
                
            }
            System.out.println("#"+test_case+" "+dis);


		}
	}
}