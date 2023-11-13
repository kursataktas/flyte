package processor

import (
	"github.com/flyteorg/flyte/flyteidl/gen/pb-go/flyteidl/core"
	"github.com/stretchr/testify/assert"
	"testing"
)

func TestMetaDataWrite(t *testing.T) {
	lit := core.Literal{
		Value: &core.Literal_Scalar{Scalar: &core.Scalar{Value: &core.Scalar_Primitive{Primitive: &core.Primitive{Value: &core.Primitive_StringValue{StringValue: "test"}}}}},
	}
	lit.Metadata = make(map[string]string)

	lit.Metadata["test"] = "test"
	assert.Equal(t, "test", lit.Metadata["test"])
}