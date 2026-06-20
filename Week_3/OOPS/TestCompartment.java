import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] arr = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            int num = r.nextInt(4) + 1;

            switch (num) {
                case 1:
                    arr[i] = new FirstClass();
                    break;
                case 2:
                    arr[i] = new Ladies();
                    break;
                case 3:
                    arr[i] = new General();
                    break;
                default:
                    arr[i] = new Luggage();
            }
        }

        for (Compartment c : arr) {
            System.out.println(c.notice());
        }
    }
}