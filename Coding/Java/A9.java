import java.util.*;
class A9
{
    public static void main()
    {
        Scanner sc =new Scanner(System.in);
        String s1,s2,s3;
        s1=sc.next();
        s2=sc.next();
        s3=s1.concat(s2);
        char ch,a;
        int i,l;
        l=s3.length();
        for(a='A';a<'Z';a++)
        {
            for(i=0;i<l;i++)
            {
                ch=s3.charAt(i);
                if(ch==a)
                System.out.print(a);
            }
        }
    }
}