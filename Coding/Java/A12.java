import java.util.*;
class A12
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s1,s2,str1="",str2="";
        char a,ch;
        int l1,l2,i,j;
        s1=sc.next();
        s2=sc.next();
        s1=s1.toUpperCase();
        s2=s2.toUpperCase();
        l1=s1.length();
        l2=s2.length();
        for(a='A';a<='Z';a++)
        {
        for(i=0;i<l1;i++)
        {
            ch=s1.charAt(i);
            if(a==ch)
            str1=str1+ch; 
        }for(j=0;j<l2;j++)
        {
            ch=s2.charAt(j);
            if(a==ch)
            str2=str2+ch;
            
        }}
        if(str1.equalsIgnoreCase(str2))
        System.out.print("Anagram Words");
        else 
        System.out.print("Not an Anagram Word");
    }
}
    