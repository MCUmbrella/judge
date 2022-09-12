import java.util.*;
public class Main
{
    final static StringBuilder sb=new StringBuilder();
    final static String x="*";
    public static void main(String[] args)
    {
        for(int a=4; a!=0; a--)
        {
            for(int b=0; b!=a; b++)
                sb.append(x);
            System.out.println(sb);
            sb.setLength(0);
        }
    }
}
