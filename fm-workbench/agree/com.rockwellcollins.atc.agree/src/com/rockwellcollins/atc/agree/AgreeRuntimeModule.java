/*
 * generated by Xtext
 */
package com.rockwellcollins.atc.agree;

import org.eclipse.xtext.generator.IGenerator;

import com.rockwellcollins.atc.agree.generator.NullGenerator;

/**
 * Use this class to register components to be used at runtime / without the
 * Equinox extension registry.
 */
public class AgreeRuntimeModule extends com.rockwellcollins.atc.agree.AbstractAgreeRuntimeModule {
    public Class<? extends IGenerator> bindIGenerator() {
        return NullGenerator.class;
    }
    
	public Class<? extends org.eclipse.xtext.resource.EObjectAtOffsetHelper> bindEObjectAtOffsetHelper() {
		return org.osate.xtext.aadl2.util.Aadl2EObjectAtOffsetHelper.class;
	}
}
