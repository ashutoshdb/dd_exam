cmd_/home/pi/exam/dd_exam/ques_1/Module.symvers := sed 's/ko$$/o/' /home/pi/exam/dd_exam/ques_1/modules.order | scripts/mod/modpost -m -a   -o /home/pi/exam/dd_exam/ques_1/Module.symvers -e -i Module.symvers   -T -
