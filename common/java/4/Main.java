public class Main
{
    static int ftoc(int f)
    {
        return 5*(f-32)/9;
    }

    public static void main(String[] args)
    {
        System.out.println(ftoc(new java.util.Scanner(System.in).nextInt()));
    }
}
