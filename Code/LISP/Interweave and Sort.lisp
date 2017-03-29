(defun interweave(alist blist)
	(setq nlis list '())
	(loop 
		(append nlis car(alist))
		(append nlis car(blist))
		(setq alist cdr(alist))
		(setq blist cdr(blist))
		(when (equal(alist '()) or equal(blist '())) (return nlis))
	)
}