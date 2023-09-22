use std::io;

fn main() {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let length: i64 = input_line.trim().parse().expect("Input not an i64");
    for _ in 0..length {
        input_line = String::new();
        io::stdin()
            .read_line(&mut input_line)
            .expect("Failed to read line");
        input_line = input_line.trim().to_lowercase();
        if "yes" == input_line {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
