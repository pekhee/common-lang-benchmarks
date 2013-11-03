import java.util.Date;

class Bench {
  public static void main(String[] args){
    int numberOfIterations = 10000000; // 10M
    long sum = 0;
    Date startTime = null;
    Date completionTime = null;

    startTime = new Date();
    for(int i = 0; i < numberOfIterations; i++) {
      sum = sum + i;
    }
    completionTime = new Date();

    System.out.println("Java bench completed");
    System.out.println(sum);
    System.out.println(completionTime.getTime() - startTime.getTime());
  }
}
