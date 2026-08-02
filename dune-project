(lang dune 3.21)

(using melange 1.0)

(dialect
 (name mlx)
 (implementation
  (extension mlx)
  (merlin_reader mlx)
  (preprocess
   (run mlx-pp %{input-file}))))

(name react_demo)

(package
 (name react_demo))
