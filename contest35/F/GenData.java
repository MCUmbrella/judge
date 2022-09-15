import java.util.*;
public class GenData
{
  final static char[] c={
    '0','1','2','3','4','5','6','7',
    '8','9','A','B','C','D','E','F'
  };
  final static Random r=new Random();

  public static void main(String[] args)
  {
    int n=Integer.parseInt(args[0]);
    StringBuilder s=new StringBuilder();
    System.out.println(n);
    for(int i=0; i!=n; i++)
    {
      for(int j=0; j!=20; j++)
        s.append(c[r.nextInt(16)]);
      s.append(' ')
       .append(r.nextInt(100000000)+1)
       .append('\n');
    }
    System.out.print(s.toString());
  }
}
