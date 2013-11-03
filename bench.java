class Bench {
  public static void main(String[] args){
    int numberOfIterations = 10000000; // 10M
    long sum = 0;
    for(int i = 0; i < numberOfIterations; i++) {
      sum = sum + i;
    }
    System.out.println(sum);
  }
}
