package com.rockwellcollins.atc.agree.codegen.ast;

import com.rockwellcollins.atc.agree.codgen.visitors.MATLABAstVisitor;
import com.rockwellcollins.atc.agree.codgen.visitors.MATLABExprVisitor;

public abstract class MATLABExpr extends MATLABAst {

	@SuppressWarnings("unchecked")
	@Override
	public <T, S extends T> S accept(MATLABAstVisitor<T, S> visitor) {
		return accept((MATLABExprVisitor<S>) visitor);
	}
	
	public abstract <T> T accept(MATLABExprVisitor<T> visitor);

}