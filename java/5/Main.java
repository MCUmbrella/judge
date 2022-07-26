public class Main
{
    static String n(int num)
    {
        String[] s=String.valueOf(num).split("");
        String ss="";
        for(int i=s.length; i!=0; i--)
            ss+=(s[i-1]+' ');
        return ss.trim();
    }

    public static void main(String[] args)
    {
        System.out.println(n(new java.util.Scanner(System.in).nextInt()));
    }
}
