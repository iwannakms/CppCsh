namespace NuchoHelp1
{
    public partial class Form1 : Form
    {
        List<int> list = new List<int>();  
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            list.Add(Int32.Parse(textBox1.Text));
            label1.Text = String.Join(", ", list);
            textBox1.Text = "";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            list.RemoveAt(list.Count - 1);
            label1.Text = String.Join(", ", list);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (list.Count == 0) 
            {
                listBox1.Items.Add("Массив пустой!");
                listBox1.Items.Add("__________________");
            }
            else if (radioButton1.Checked)
            {
                Task_1();
            }
            else if (radioButton2.Checked)
            {
                Task_2();
            }
            else if (radioButton3.Checked)
            {
                Task_3();
            }
            else if (radioButton4.Checked)
            {
                Task_4();
            }
            else
            {
                listBox1.Items.Add("Выберите команду!");
                listBox1.Items.Add("__________________");
            }
        }

        private void Task_1()
        {
            int max = list.Max();
            bool start = false;
            int mult = 1;
            int sum = 0;
            for (int i = list.Count - 1; i >= 0; i--)
            {
                if (start)
                {
                    mult *= list[i];
                }
                else if (list[i] == max)
                {
                    start = true;
                }
                else
                {
                    sum += list[i];
                }
            }

            if (mult == 1)
            {
                listBox1.Items.Add("Первое задание");
                listBox1.Items.Add("Невозможно вычислить так как максимальный элемент единственный и он стоит в самом начале");
                listBox1.Items.Add("__________________");
            } 
            else
            {
                listBox1.Items.Add("Первое задание");
                listBox1.Items.Add("Произведение всех элементов массива до последнего максимального элемента равно - " + mult);
                listBox1.Items.Add("Сумма всех элементов массива после последнего максимального элемента равно - " + sum);
                listBox1.Items.Add("Отношение произведения и суммы равно - " + (mult - sum));
                listBox1.Items.Add("__________________");
            }
        }

        private void Task_2()
        {
            List<int> copy = list.ToList();
            int countRepeat = 1;
            bool flag = false;
            for (int i = copy.Count - 2; i >= 0; i--)
            {
                if (copy[i] >= 0)
                {
                    countRepeat++;
                }
                else
                {
                    if (countRepeat == 2)
                    {
                        copy.RemoveAt(i + 1);
                        copy.RemoveAt(i + 1);
                        flag = true;
                        break;
                    }
                    countRepeat = 1;
                }
            }
            if (flag)
            {
                listBox1.Items.Add("Второе задание");
                listBox1.Items.Add("Результат - " + String.Join(", ", copy));
                listBox1.Items.Add("__________________");
            }
            else
            {
                listBox1.Items.Add("Второе задание");
                listBox1.Items.Add("В массиве не существует двух подряд идущих положительных элементов");
                listBox1.Items.Add("__________________");
            }
        }

        private void Task_3()
        {
            List<int> copy = list.ToList();
            if (copy.Count((i) => i < 0) == 0)
            {
                listBox1.Items.Add("Третье задание");
                listBox1.Items.Add("В массиве не существует отрицательных элементов");
                listBox1.Items.Add("__________________");
            }
            else
            {
                for (int i = copy.Count - 1; i>=0; i--)
                {
                    if (copy[i] < 0) 
                    {
                        copy.Insert(i + 1, Int32.Parse(textBox2.Text));
                        copy.Insert(i + 1, Int32.Parse(textBox2.Text));
                        break;
                    }
                }
                listBox1.Items.Add("Третье задание");
                listBox1.Items.Add("Результат - " + String.Join(", ", copy));
                listBox1.Items.Add("__________________");
            }
        }

        private void Task_4()
        {
            if (list.Count((i) => i >= 0) == 0)
            {
                listBox1.Items.Add("Четвертое задание");
                listBox1.Items.Add("В массиве не существует положительных элементов");
                listBox1.Items.Add("__________________");
            }
            else
            {
                listBox1.Items.Add("Четвертое задание");
                listBox1.Items.Add("Количество положительных элементов равно - " + list.Count((i) => i >= 0));
                listBox1.Items.Add("__________________");
            }
        }
    }
}