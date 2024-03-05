git rev-parse --show-toplevel | xargs find . | git check-ignore --stdin | xargs -0 basename -a

