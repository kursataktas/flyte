package v1alpha1

import (
	"k8s.io/apimachinery/pkg/api/resource"

	"github.com/flyteorg/flyte/flyteidl/gen/pb-go/flyteidl/admin"
)

// This contains an OutputLocationPrefix. When running against AWS, this should be something of the form
// s3://my-bucket, or s3://my-bucket/  A sharding string will automatically be appended to this prefix before
// handing off to plugins/tasks. Sharding behavior may change in the future.
// Background available at https://github.com/flyteorg/flyte/issues/211
type RawOutputDataConfig struct {
	*admin.RawOutputDataConfig
}

func (in *RawOutputDataConfig) DeepCopyInto(out *RawOutputDataConfig) {
	*out = *in
}

// This contains workflow-execution specifications and overrides.
type ExecutionConfig struct {
	// Maps individual task types to their alternate (non-default) plugin handlers by name.
	TaskPluginImpls map[string]TaskPluginOverride
	// Can be used to control the number of parallel nodes to run within the workflow. This is useful to achieve fairness.
	MaxParallelism uint32
	// Defines execution behavior for processing nodes.
	RecoveryExecution WorkflowExecutionIdentifier
	// Defines the resource requests and limits specified for tasks run as part of this execution that ought to be
	// applied at execution time.
	TaskResources TaskResources
	// Defines whether a workflow has been flagged as interruptible.
	Interruptible *bool
	// Defines whether a workflow should skip all its cached results and re-compute its output, overwriting any already stored data.
	OverwriteCache bool
	// Defines a map of environment variable name / value pairs that are applied to all tasks.
	EnvironmentVariables map[string]string
	// Defines a list of connections config that used to connect to the external services.
	ExternalResourceAttribute ExternalResourceAttributes
}

type TaskPluginOverride struct {
	PluginIDs             []string
	MissingPluginBehavior admin.PluginOverride_MissingPluginBehavior
}

// Defines a set of configurable resources of different types that a task can request or apply as limits.
type TaskResourceSpec struct {
	CPU              resource.Quantity
	Memory           resource.Quantity
	EphemeralStorage resource.Quantity
	Storage          resource.Quantity
	GPU              resource.Quantity
}

// Defines the complete closure of compute resources a task can request and apply as limits.
type TaskResources struct {
	// If the node where a task is running has enough of a resource available, a
	// container may use more resources than its request for that resource specifies.
	Requests TaskResourceSpec
	// A hard limit, a task cannot consume resources greater than the limit specifies.
	Limits TaskResourceSpec
}

type Connection struct {
	// Defines a map of secrets that are used to connect to the external services.
	// The key is the name of the secret, such as openai_api_key, databricks_access_token, etc.
	// The value is the name of the k8s or aws secret.
	Secrets map[string]string
	// Defines a map of configs that are used to connect to the external services, such as organization_id, workspace_id, etc.
	Configs map[string]string
}

type ExternalResourceAttributes struct {
	// Defines a map of connections that are used to connect to the external services.
	Connections map[string]Connection
}
