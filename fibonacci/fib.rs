use std::time::UNIX_EPOCH;

fn fibonacci(n: u32) -> u32 {
  match n {
    0 => 1,
    1 => 1,
    _ => fibonacci(n - 1) + fibonacci(n - 2),
  }
}

fn main() {
  let start_ms = std::time::SystemTime::now().duration_since(UNIX_EPOCH).expect("error");
  fibonacci(40);
  let end_ms = std::time::SystemTime::now().duration_since(UNIX_EPOCH).expect("error");
  println!("{:?}", end_ms - start_ms);
}