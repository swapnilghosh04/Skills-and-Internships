document.addEventListener("DOMContentLoaded", () => {
    const colorBtn = document.getElementById("colorBtn");
    const palette = ["#4f46e5", "#16a34a", "#f59e0b", "#ef4444", "#06b6d4", "#a855f7"];
    let idx = 0;
    colorBtn.addEventListener("click", () => {
      idx = (idx + 1) % palette.length;
      colorBtn.style.backgroundColor = palette[idx];
    });
  
    const greetBtn = document.getElementById("greetBtn");
    greetBtn.addEventListener("click", () => {
      const hour = new Date().getHours();
      let greeting = "Hello";
      if (hour < 12) greeting = "Good morning";
      else if (hour < 18) greeting = "Good afternoon";
      else if (hour < 21) greeting = "Good evening";
      else greeting = "Good night";
      alert(`${greeting}! Welcome to the JavaScript demo.`);
    });

    const numA = document.getElementById("numA");
    const numB = document.getElementById("numB");
    const sumBtn = document.getElementById("sumBtn");
    const clearBtn = document.getElementById("clearBtn");
    const result = document.getElementById("result");
  
    function add() {
      const a = parseFloat(numA.value);
      const b = parseFloat(numB.value);
      if (Number.isNaN(a) || Number.isNaN(b)) {
        result.textContent = "Please enter two valid numbers.";
        return;
      }
      result.textContent = `Sum = ${a + b}`;
    }
  
    sumBtn.addEventListener("click", add);

    [numA, numB].forEach((el) => {
      el.addEventListener("keydown", (e) => {
        if (e.key === "Enter") add();
      });
    });

    clearBtn.addEventListener("click", () => {
      numA.value = "";
      numB.value = "";
      result.textContent = "Result will appear here";
      numA.focus();
    });
  });
  