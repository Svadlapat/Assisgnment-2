fn create_and_drop_box() {
    // Box<T> allocates memory on the heap. 'heap_data' is the owner.
    let heap_data = Box::new([0; 10000]);
    println!("Box created with {} bytes.", std::mem::size_of_val(&*heap_data));
} // The memory is automatically freed here when 'heap_data' goes out of scope.

fn main() {
    println!("Demonstrating Rust's ownership model.");
    create_and_drop_box();
    println!("Box was freed automatically. No memory leaks!");
}
