public class GC_Demo {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Creating objects to demonstrate GC...");
        System.out.println("Open VisualVM and connect to this 'GC_Demo' process.");

        // Loop to continuously create objects
        for (int i = 0; i < 1000; i++) {
            createObjects();
            Thread.sleep(50); // Pause so the graph is easier to see
        }
        System.out.println("Program finished.");
    }

    public static void createObjects() {
        // These objects are immediately eligible for garbage collection
        for (int i = 0; i < 10000; i++) {
            new Object();
        }
    }
}
