cmd_/home/pi/exam/dd_exam/ques_2/modules.order := {   echo /home/pi/exam/dd_exam/ques_2/driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/exam/dd_exam/ques_2/modules.order
